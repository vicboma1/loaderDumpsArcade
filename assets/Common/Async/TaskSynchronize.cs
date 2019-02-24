using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Common.Async
{
    //Ejecuta componentes visuales de manera sincrona
    public class TaskSynchronize
    {
        public static Task Async(ISynchronizeInvoke sync,Action action) =>
            Task.Factory.StartNew(() => Invoke.Async(sync, () => action.Invoke()));
       
        public static Task<T> Async<T>(ISynchronizeInvoke sync, Func<T> fun) =>
            Task<T>.Factory.StartNew(() => Invoke.Async<T>(sync, fun));
       
        public static Task<T> Async<I, T>(ISynchronizeInvoke sync, I context, Func<I, T> fun) =>
            Task<T>.Factory.StartNew(() => Invoke.Async<T, I>(sync, context, fun));
    }
}
