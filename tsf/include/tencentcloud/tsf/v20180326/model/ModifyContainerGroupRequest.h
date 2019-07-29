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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYCONTAINERGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYCONTAINERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyContainerGroup请求参数结构体
                */
                class ModifyContainerGroupRequest : public AbstractModel
                {
                public:
                    ModifyContainerGroupRequest();
                    ~ModifyContainerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param GroupId 部署组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取0:公网 1:集群内访问 2：NodePort
                     * @return AccessType 0:公网 1:集群内访问 2：NodePort
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置0:公网 1:集群内访问 2：NodePort
                     * @param AccessType 0:公网 1:集群内访问 2：NodePort
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取ProtocolPorts数组
                     * @return ProtocolPorts ProtocolPorts数组
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置ProtocolPorts数组
                     * @param ProtocolPorts ProtocolPorts数组
                     */
                    void SetProtocolPorts(const std::vector<ProtocolPort>& _protocolPorts);

                    /**
                     * 判断参数 ProtocolPorts 是否已赋值
                     * @return ProtocolPorts 是否已赋值
                     */
                    bool ProtocolPortsHasBeenSet() const;

                    /**
                     * 获取更新方式：0:快速更新 1:滚动更新
                     * @return UpdateType 更新方式：0:快速更新 1:滚动更新
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置更新方式：0:快速更新 1:滚动更新
                     * @param UpdateType 更新方式：0:快速更新 1:滚动更新
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取更新间隔,单位秒
                     * @return UpdateIvl 更新间隔,单位秒
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置更新间隔,单位秒
                     * @param UpdateIvl 更新间隔,单位秒
                     */
                    void SetUpdateIvl(const int64_t& _updateIvl);

                    /**
                     * 判断参数 UpdateIvl 是否已赋值
                     * @return UpdateIvl 是否已赋值
                     */
                    bool UpdateIvlHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 0:公网 1:集群内访问 2：NodePort
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * ProtocolPorts数组
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * 更新方式：0:快速更新 1:滚动更新
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 更新间隔,单位秒
                     */
                    int64_t m_updateIvl;
                    bool m_updateIvlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYCONTAINERGROUPREQUEST_H_
