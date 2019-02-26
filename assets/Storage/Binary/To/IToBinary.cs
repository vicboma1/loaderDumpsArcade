using System;
using System.Threading.Tasks;

namespace Storage
{
    public interface IToBinary
    {
        Task<bool> WriterAsync(byte[] data, String file);
        Task<bool> WriterAsyncMonitor(byte[] data);
    }
}
