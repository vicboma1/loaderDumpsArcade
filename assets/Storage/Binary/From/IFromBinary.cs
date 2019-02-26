using System;
using System.Threading.Tasks;

namespace Storage
{
    public interface IFromBinary
    {
        Task<byte[]> ReaderAsync(String file);
        Task<byte[]> ReaderAsyncMonitor();
    }
}
