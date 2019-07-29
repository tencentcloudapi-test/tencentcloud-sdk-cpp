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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Target.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 修改节点权重的数据类型
                */
                class RsWeightRule : public AbstractModel
                {
                public:
                    RsWeightRule();
                    ~RsWeightRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取转发规则的ID
                     * @return LocationId 转发规则的ID
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则的ID
                     * @param LocationId 转发规则的ID
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取要修改权重的后端机器列表
                     * @return Targets 要修改权重的后端机器列表
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置要修改权重的后端机器列表
                     * @param Targets 要修改权重的后端机器列表
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取目标规则的域名，提供LocationId参数时本参数不生效
                     * @return Domain 目标规则的域名，提供LocationId参数时本参数不生效
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置目标规则的域名，提供LocationId参数时本参数不生效
                     * @param Domain 目标规则的域名，提供LocationId参数时本参数不生效
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取目标规则的URL，提供LocationId参数时本参数不生效
                     * @return Url 目标规则的URL，提供LocationId参数时本参数不生效
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置目标规则的URL，提供LocationId参数时本参数不生效
                     * @param Url 目标规则的URL，提供LocationId参数时本参数不生效
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取后端服务新的转发权重，取值范围：0~100。
                     * @return Weight 后端服务新的转发权重，取值范围：0~100。
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置后端服务新的转发权重，取值范围：0~100。
                     * @param Weight 后端服务新的转发权重，取值范围：0~100。
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 负载均衡监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发规则的ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 要修改权重的后端机器列表
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 目标规则的域名，提供LocationId参数时本参数不生效
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 目标规则的URL，提供LocationId参数时本参数不生效
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 后端服务新的转发权重，取值范围：0~100。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_
