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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_SENDSMSCODEREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_SENDSMSCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * SendSmsCode请求参数结构体
                */
                class SendSmsCodeRequest : public AbstractModel
                {
                public:
                    SendSmsCodeRequest();
                    ~SendSmsCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码目的，当前仅支持换绑超级管理员账号，固定填写 BindSuperAdmin。
                     * @return Purpose 验证码目的，当前仅支持换绑超级管理员账号，固定填写 BindSuperAdmin。
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置验证码目的，当前仅支持换绑超级管理员账号，固定填写 BindSuperAdmin。
                     * @param Purpose 验证码目的，当前仅支持换绑超级管理员账号，固定填写 BindSuperAdmin。
                     */
                    void SetPurpose(const std::string& _purpose);

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取官方云盘实例 ID
                     * @return InstanceId 官方云盘实例 ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置官方云盘实例 ID
                     * @param InstanceId 官方云盘实例 ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取将作为超级管理员账号的手机号码，仅限中国境内手机号，无需国家代码“+86”。
                     * @return PhoneNumber 将作为超级管理员账号的手机号码，仅限中国境内手机号，无需国家代码“+86”。
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置将作为超级管理员账号的手机号码，仅限中国境内手机号，无需国家代码“+86”。
                     * @param PhoneNumber 将作为超级管理员账号的手机号码，仅限中国境内手机号，无需国家代码“+86”。
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                private:

                    /**
                     * 验证码目的，当前仅支持换绑超级管理员账号，固定填写 BindSuperAdmin。
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * 官方云盘实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 将作为超级管理员账号的手机号码，仅限中国境内手机号，无需国家代码“+86”。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_SENDSMSCODEREQUEST_H_
