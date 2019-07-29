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

#include <tencentcloud/tci/v20190318/model/ExpressRatioStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

ExpressRatioStatistic::ExpressRatioStatistic() :
    m_expressHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ExpressRatioStatistic::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Express") && !value["Express"].IsNull())
    {
        if (!value["Express"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpressRatioStatistic.Express` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_express = string(value["Express"].GetString());
        m_expressHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ExpressRatioStatistic.Ratio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExpressRatioStatistic.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpressRatioStatistic::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_expressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Express";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_express.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ExpressRatioStatistic::GetExpress() const
{
    return m_express;
}

void ExpressRatioStatistic::SetExpress(const string& _express)
{
    m_express = _express;
    m_expressHasBeenSet = true;
}

bool ExpressRatioStatistic::ExpressHasBeenSet() const
{
    return m_expressHasBeenSet;
}

double ExpressRatioStatistic::GetRatio() const
{
    return m_ratio;
}

void ExpressRatioStatistic::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool ExpressRatioStatistic::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

int64_t ExpressRatioStatistic::GetCount() const
{
    return m_count;
}

void ExpressRatioStatistic::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ExpressRatioStatistic::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

