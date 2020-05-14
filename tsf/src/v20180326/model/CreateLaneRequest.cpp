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

#include <tencentcloud/tsf/v20180326/model/CreateLaneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

CreateLaneRequest::CreateLaneRequest() :
    m_laneNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_laneGroupListHasBeenSet(false)
{
}

string CreateLaneRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_laneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_laneName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_laneGroupListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaneGroupList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_laneGroupList.begin(); itr != m_laneGroupList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLaneRequest::GetLaneName() const
{
    return m_laneName;
}

void CreateLaneRequest::SetLaneName(const string& _laneName)
{
    m_laneName = _laneName;
    m_laneNameHasBeenSet = true;
}

bool CreateLaneRequest::LaneNameHasBeenSet() const
{
    return m_laneNameHasBeenSet;
}

string CreateLaneRequest::GetRemark() const
{
    return m_remark;
}

void CreateLaneRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateLaneRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<LaneGroup> CreateLaneRequest::GetLaneGroupList() const
{
    return m_laneGroupList;
}

void CreateLaneRequest::SetLaneGroupList(const vector<LaneGroup>& _laneGroupList)
{
    m_laneGroupList = _laneGroupList;
    m_laneGroupListHasBeenSet = true;
}

bool CreateLaneRequest::LaneGroupListHasBeenSet() const
{
    return m_laneGroupListHasBeenSet;
}


