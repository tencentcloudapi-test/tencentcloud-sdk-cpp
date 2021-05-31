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

#include <tencentcloud/iotcloud/v20180614/model/EditFirmwareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

EditFirmwareRequest::EditFirmwareRequest() :
    m_productIDHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_firmwareNameHasBeenSet(false),
    m_firmwareDescriptionHasBeenSet(false),
    m_fwTypeHasBeenSet(false)
{
}

string EditFirmwareRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirmwareName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_firmwareName.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirmwareDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_firmwareDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fwType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EditFirmwareRequest::GetProductID() const
{
    return m_productID;
}

void EditFirmwareRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool EditFirmwareRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string EditFirmwareRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void EditFirmwareRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool EditFirmwareRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

string EditFirmwareRequest::GetFirmwareName() const
{
    return m_firmwareName;
}

void EditFirmwareRequest::SetFirmwareName(const string& _firmwareName)
{
    m_firmwareName = _firmwareName;
    m_firmwareNameHasBeenSet = true;
}

bool EditFirmwareRequest::FirmwareNameHasBeenSet() const
{
    return m_firmwareNameHasBeenSet;
}

string EditFirmwareRequest::GetFirmwareDescription() const
{
    return m_firmwareDescription;
}

void EditFirmwareRequest::SetFirmwareDescription(const string& _firmwareDescription)
{
    m_firmwareDescription = _firmwareDescription;
    m_firmwareDescriptionHasBeenSet = true;
}

bool EditFirmwareRequest::FirmwareDescriptionHasBeenSet() const
{
    return m_firmwareDescriptionHasBeenSet;
}

string EditFirmwareRequest::GetFwType() const
{
    return m_fwType;
}

void EditFirmwareRequest::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool EditFirmwareRequest::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}


