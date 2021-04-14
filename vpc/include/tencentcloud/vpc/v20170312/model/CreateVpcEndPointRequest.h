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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpcEndPoint请求参数结构体
                */
                class CreateVpcEndPointRequest : public AbstractModel
                {
                public:
                    CreateVpcEndPointRequest();
                    ~CreateVpcEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param VpcId VPC实例ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网实例ID。
                     * @return SubnetId 子网实例ID。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。
                     * @param SubnetId 子网实例ID。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取终端节点名称。
                     * @return EndPointName 终端节点名称。
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称。
                     * @param EndPointName 终端节点名称。
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取终端节点服务ID。
                     * @return EndPointServiceId 终端节点服务ID。
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID。
                     * @param EndPointServiceId 终端节点服务ID。
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点VIP，可以指定IP申请。
                     * @return EndPointVip 终端节点VIP，可以指定IP申请。
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置终端节点VIP，可以指定IP申请。
                     * @param EndPointVip 终端节点VIP，可以指定IP申请。
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取安全组ID。
                     * @return SecurityGroupId 安全组ID。
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID。
                     * @param SecurityGroupId 安全组ID。
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 终端节点名称。
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 终端节点服务ID。
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点VIP，可以指定IP申请。
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * 安全组ID。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTREQUEST_H_
