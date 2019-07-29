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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeleteRule请求参数结构体
                */
                class DeleteRuleRequest : public AbstractModel
                {
                public:
                    DeleteRuleRequest();
                    ~DeleteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID
                     * @return LoadBalancerId 负载均衡实例 ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID
                     * @param LoadBalancerId 负载均衡实例 ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器 ID
                     * @return ListenerId 负载均衡监听器 ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器 ID
                     * @param ListenerId 负载均衡监听器 ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取要删除的转发规则的ID组成的数组
                     * @return LocationIds 要删除的转发规则的ID组成的数组
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置要删除的转发规则的ID组成的数组
                     * @param LocationIds 要删除的转发规则的ID组成的数组
                     */
                    void SetLocationIds(const std::vector<std::string>& _locationIds);

                    /**
                     * 判断参数 LocationIds 是否已赋值
                     * @return LocationIds 是否已赋值
                     */
                    bool LocationIdsHasBeenSet() const;

                    /**
                     * 获取要删除的转发规则的域名，已提供LocationIds参数时本参数不生效
                     * @return Domain 要删除的转发规则的域名，已提供LocationIds参数时本参数不生效
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置要删除的转发规则的域名，已提供LocationIds参数时本参数不生效
                     * @param Domain 要删除的转发规则的域名，已提供LocationIds参数时本参数不生效
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取要删除的转发规则的转发路径，已提供LocationIds参数时本参数不生效
                     * @return Url 要删除的转发规则的转发路径，已提供LocationIds参数时本参数不生效
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置要删除的转发规则的转发路径，已提供LocationIds参数时本参数不生效
                     * @param Url 要删除的转发规则的转发路径，已提供LocationIds参数时本参数不生效
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 要删除的转发规则的ID组成的数组
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                    /**
                     * 要删除的转发规则的域名，已提供LocationIds参数时本参数不生效
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要删除的转发规则的转发路径，已提供LocationIds参数时本参数不生效
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
