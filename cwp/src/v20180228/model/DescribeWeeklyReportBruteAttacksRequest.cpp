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

#include <tencentcloud/cwp/v20180228/model/DescribeWeeklyReportBruteAttacksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeWeeklyReportBruteAttacksRequest::DescribeWeeklyReportBruteAttacksRequest() :
    m_beginDateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeWeeklyReportBruteAttacksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWeeklyReportBruteAttacksRequest::GetBeginDate() const
{
    return m_beginDate;
}

void DescribeWeeklyReportBruteAttacksRequest::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool DescribeWeeklyReportBruteAttacksRequest::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

uint64_t DescribeWeeklyReportBruteAttacksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeWeeklyReportBruteAttacksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeWeeklyReportBruteAttacksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeWeeklyReportBruteAttacksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeWeeklyReportBruteAttacksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeWeeklyReportBruteAttacksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


