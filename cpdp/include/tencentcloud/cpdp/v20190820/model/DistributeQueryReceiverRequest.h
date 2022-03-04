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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYRECEIVERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * DistributeQueryReceiver请求参数结构体
                */
                class DistributeQueryReceiverRequest : public AbstractModel
                {
                public:
                    DistributeQueryReceiverRequest();
                    ~DistributeQueryReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用门店OpenId
                     * @return OpenId 使用门店OpenId
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置使用门店OpenId
                     * @param OpenId 使用门店OpenId
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取使用门店OpenKey
                     * @return OpenKey 使用门店OpenKey
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置使用门店OpenKey
                     * @param OpenKey 使用门店OpenKey
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param Profile 沙箱环境填sandbox，正式环境不填
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 使用门店OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 使用门店OpenKey
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEQUERYRECEIVERREQUEST_H_
