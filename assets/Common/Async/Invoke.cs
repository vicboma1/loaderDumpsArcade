using System;
using System.ComponentModel;

namespace Common
{
    public class Invoke
    {
        public static void Async(ISynchronizeInvoke sync, Action action)
        {
            if (sync.InvokeRequired)
                sync.Invoke(action, null);
            else
                action();
        }

        public static T Async<T>(ISynchronizeInvoke sync, Func<T> fun)=> 
            ((sync.InvokeRequired)) ? (T)sync.Invoke(fun, null) : fun();
        
        public static T Async<T, I>(ISynchronizeInvoke sync, I context, Func<I, T> fun) =>
            (sync.InvokeRequired)
                ? (T)sync.Invoke(fun, new object[] { context })
                : fun.Invoke(context);       
    }
}
