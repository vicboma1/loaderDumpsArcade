using System;
using Newtonsoft.Json;
using System.IO;
using System.Threading.Tasks;
using System.Collections.Generic;

namespace Common
{
    public class JSON
    {
        public static JSON Create() =>
            new JSON();

        JSON() { }


        public static Task<Boolean> WriterAsync<T>(T data, String path) =>
            Task<Boolean>.Factory.StartNew(() =>
            {
                try
                {
                    using (var _file = File.CreateText(path))
                        new JsonSerializer().Serialize(_file, data);

                    return true;
                }
                catch (Exception e)
                {
                    return false;
                }
            });


        public static Task<Boolean> WriterAsyncGame<T>(T data) where T : IDictionary<String, IDictionary<String, object>> =>
            WriterAsync<T>(data, Common.Constants.JSON_GAME);

        public static Task<Boolean> WriterAsyncInput<T>(T data) where T : IDictionary<int, IDictionary<String, object>> =>
            WriterAsync<T>(data, Common.Constants.JSON_INPUT);


        public static Task<T> ReaderAsync<T>(String json) =>
            Task<T>.Factory.StartNew(() =>
                JsonConvert.DeserializeObject<T>(json)
            );
      
        public static Task<T> ReaderAsyncFromFile<T>(String file) =>
           ReaderAsync<T>(File.ReadAllText(file));

        public static Task<IDictionary<String, IDictionary<String, Object>>>ReaderAsyncFromGame() =>
            ReaderAsyncFromFile<IDictionary<String, IDictionary<String, Object>>>(Constants.JSON_GAME);

        public static Task<IDictionary<int, IDictionary<String, Object>>> ReaderAsyncFromInput() =>
            ReaderAsyncFromFile<IDictionary<int, IDictionary<String, Object>>>(Constants.JSON_INPUT);

    }
}
