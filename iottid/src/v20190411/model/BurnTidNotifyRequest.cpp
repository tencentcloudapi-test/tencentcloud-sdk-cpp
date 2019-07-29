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

#include <tencentcloud/iottid/v20190411/model/BurnTidNotifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iottid::V20190411::Model;
using namespace rapidjson;
using namespace std;

BurnTidNotifyRequest::BurnTidNotifyRequest() :
    m_orderIdHasBeenSet(false),
    m_tidHasBeenSet(false)
{
}

string BurnTidNotifyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tid.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BurnTidNotifyRequest::GetOrderId() const
{
    return m_orderId;
}

void BurnTidNotifyRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool BurnTidNotifyRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string BurnTidNotifyRequest::GetTid() const
{
    return m_tid;
}

void BurnTidNotifyRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool BurnTidNotifyRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}


