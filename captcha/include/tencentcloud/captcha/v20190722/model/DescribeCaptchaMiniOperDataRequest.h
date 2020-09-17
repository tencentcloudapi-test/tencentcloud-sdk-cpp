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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIOPERDATAREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIOPERDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaMiniOperData请求参数结构体
                */
                class DescribeCaptchaMiniOperDataRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaMiniOperDataRequest();
                    ~DescribeCaptchaMiniOperDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码应用ID
                     * @return CaptchaAppId 验证码应用ID
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用ID
                     * @param CaptchaAppId 验证码应用ID
                     */
                    void SetCaptchaAppId(const uint64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return Start 查询开始时间
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置查询开始时间
                     * @param Start 查询开始时间
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取查询类型
                     * @return Type 查询类型
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置查询类型
                     * @param Type 查询类型
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 验证码应用ID
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 查询类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIOPERDATAREQUEST_H_
