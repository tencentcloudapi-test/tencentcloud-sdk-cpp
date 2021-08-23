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

#include <tencentcloud/youmall/v20180228/model/NetworkLastInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

NetworkLastInfo::NetworkLastInfo() :
    m_countHasBeenSet(false),
    m_infosHasBeenSet(false)
{
}

CoreInternalOutcome NetworkLastInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkLastInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Infos") && !value["Infos"].IsNull())
    {
        if (!value["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkLastInfo.Infos` is not array type"));

        const rapidjson::Value &tmpValue = value["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkAndShopInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infos.push_back(item);
        }
        m_infosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkLastInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t NetworkLastInfo::GetCount() const
{
    return m_count;
}

void NetworkLastInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NetworkLastInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<NetworkAndShopInfo> NetworkLastInfo::GetInfos() const
{
    return m_infos;
}

void NetworkLastInfo::SetInfos(const vector<NetworkAndShopInfo>& _infos)
{
    m_infos = _infos;
    m_infosHasBeenSet = true;
}

bool NetworkLastInfo::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

