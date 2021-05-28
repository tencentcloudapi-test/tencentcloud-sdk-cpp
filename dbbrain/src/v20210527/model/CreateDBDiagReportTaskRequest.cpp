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

#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace rapidjson;
using namespace std;

CreateDBDiagReportTaskRequest::CreateDBDiagReportTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sendMailFlagHasBeenSet(false),
    m_contactPersonHasBeenSet(false),
    m_contactGroupHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string CreateDBDiagReportTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sendMailFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SendMailFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendMailFlag, allocator);
    }

    if (m_contactPersonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContactPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_contactPerson.begin(); itr != m_contactPerson.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_contactGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContactGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_contactGroup.begin(); itr != m_contactGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_productHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_product.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBDiagReportTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateDBDiagReportTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateDBDiagReportTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateDBDiagReportTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateDBDiagReportTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateDBDiagReportTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CreateDBDiagReportTaskRequest::GetSendMailFlag() const
{
    return m_sendMailFlag;
}

void CreateDBDiagReportTaskRequest::SetSendMailFlag(const int64_t& _sendMailFlag)
{
    m_sendMailFlag = _sendMailFlag;
    m_sendMailFlagHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::SendMailFlagHasBeenSet() const
{
    return m_sendMailFlagHasBeenSet;
}

vector<int64_t> CreateDBDiagReportTaskRequest::GetContactPerson() const
{
    return m_contactPerson;
}

void CreateDBDiagReportTaskRequest::SetContactPerson(const vector<int64_t>& _contactPerson)
{
    m_contactPerson = _contactPerson;
    m_contactPersonHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::ContactPersonHasBeenSet() const
{
    return m_contactPersonHasBeenSet;
}

vector<int64_t> CreateDBDiagReportTaskRequest::GetContactGroup() const
{
    return m_contactGroup;
}

void CreateDBDiagReportTaskRequest::SetContactGroup(const vector<int64_t>& _contactGroup)
{
    m_contactGroup = _contactGroup;
    m_contactGroupHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::ContactGroupHasBeenSet() const
{
    return m_contactGroupHasBeenSet;
}

string CreateDBDiagReportTaskRequest::GetProduct() const
{
    return m_product;
}

void CreateDBDiagReportTaskRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateDBDiagReportTaskRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


