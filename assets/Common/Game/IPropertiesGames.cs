using Common;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Common
{
    public interface IPropertiesGames
    {
        IDictionary<String, IDictionary<String, Object>> data { get; set; }

        IDictionary<String, Object> this[String key] { get;  }

        String[] ConfigurationItemSource { get; }

    }
}