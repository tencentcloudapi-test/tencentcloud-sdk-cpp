/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/dbbrain/v20210527/model/MonitorMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace rapidjson;
using namespace std;

MonitorMetric::MonitorMetric() :
    m_metricHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome MonitorMetric::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorMetric.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `MonitorMetric.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Error("response `MonitorMetric.Values` is not array type"));

        const Value &tmpValue = value["Values"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetDouble());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorMetric::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetDouble(*itr), allocator);
        }
    }

}


string MonitorMetric::GetMetric() const
{
    return m_metric;
}

void MonitorMetric::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool MonitorMetric::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string MonitorMetric::GetUnit() const
{
    return m_unit;
}

void MonitorMetric::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MonitorMetric::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

vector<double> MonitorMetric::GetValues() const
{
    return m_values;
}

void MonitorMetric::SetValues(const vector<double>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool MonitorMetric::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

