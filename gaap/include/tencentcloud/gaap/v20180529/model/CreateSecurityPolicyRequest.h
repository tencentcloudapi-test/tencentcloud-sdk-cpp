/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {

                /**
                * CreateSecurityPolicy请求参数结构体
                */
                class CreateSecurityPolicyRequest : public AbstractModel
                {
                public:
                    CreateSecurityPolicyRequest();
                    ~CreateSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取默认策略：ACCEPT或DROP
                     * @return DefaultAction 默认策略：ACCEPT或DROP
                     * 
                     */
                    std::string GetDefaultAction() const;

                    /**
                     * 设置默认策略：ACCEPT或DROP
                     * @param _defaultAction 默认策略：ACCEPT或DROP
                     * 
                     */
                    void SetDefaultAction(const std::string& _defaultAction);

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     * 
                     */
                    bool DefaultActionHasBeenSet() const;

                    /**
                     * 获取加速通道ID
                     * @return ProxyId 加速通道ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置加速通道ID
                     * @param _proxyId 加速通道ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取通道组ID
                     * @return GroupId 通道组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID
                     * @param _groupId 通道组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 默认策略：ACCEPT或DROP
                     */
                    std::string m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                    /**
                     * 加速通道ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 通道组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYPOLICYREQUEST_H_
