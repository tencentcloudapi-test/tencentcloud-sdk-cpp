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

#include <tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace rapidjson;
using namespace std;

DeletePrivateZoneRecordRequest::DeletePrivateZoneRecordRequest() :
    m_zoneIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_recordIdSetHasBeenSet(false)
{
}

string DeletePrivateZoneRecordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_recordIdSet.begin(); itr != m_recordIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePrivateZoneRecordRequest::GetZoneId() const
{
    return m_zoneId;
}

void DeletePrivateZoneRecordRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DeletePrivateZoneRecordRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DeletePrivateZoneRecordRequest::GetRecordId() const
{
    return m_recordId;
}

void DeletePrivateZoneRecordRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DeletePrivateZoneRecordRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

vector<string> DeletePrivateZoneRecordRequest::GetRecordIdSet() const
{
    return m_recordIdSet;
}

void DeletePrivateZoneRecordRequest::SetRecordIdSet(const vector<string>& _recordIdSet)
{
    m_recordIdSet = _recordIdSet;
    m_recordIdSetHasBeenSet = true;
}

bool DeletePrivateZoneRecordRequest::RecordIdSetHasBeenSet() const
{
    return m_recordIdSetHasBeenSet;
}


