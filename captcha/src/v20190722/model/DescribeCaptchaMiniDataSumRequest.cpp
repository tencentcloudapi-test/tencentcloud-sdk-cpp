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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaMiniDataSumRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace rapidjson;
using namespace std;

DescribeCaptchaMiniDataSumRequest::DescribeCaptchaMiniDataSumRequest() :
    m_captchaAppIdHasBeenSet(false),
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

string DescribeCaptchaMiniDataSumRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_captchaAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaAppId, allocator);
    }

    if (m_startHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_end, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCaptchaMiniDataSumRequest::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void DescribeCaptchaMiniDataSumRequest::SetCaptchaAppId(const int64_t& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool DescribeCaptchaMiniDataSumRequest::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumRequest::GetStart() const
{
    return m_start;
}

void DescribeCaptchaMiniDataSumRequest::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool DescribeCaptchaMiniDataSumRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

int64_t DescribeCaptchaMiniDataSumRequest::GetEnd() const
{
    return m_end;
}

void DescribeCaptchaMiniDataSumRequest::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool DescribeCaptchaMiniDataSumRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}


