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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYMASTERCOMPONENTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYMASTERCOMPONENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {

                /**
                * ModifyMasterComponent请求参数结构体
                */
                class ModifyMasterComponentRequest : public AbstractModel
                {
                public:
                    ModifyMasterComponentRequest();
                    ~ModifyMasterComponentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * @return Component master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * @param _component master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取停机或恢复，值只能为：shutdown或restore
                     * @return Operation 停机或恢复，值只能为：shutdown或restore
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置停机或恢复，值只能为：shutdown或restore
                     * @param _operation 停机或恢复，值只能为：shutdown或restore
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取为true时，不真正执行停机或恢复操作	
                     * @return DryRun 为true时，不真正执行停机或恢复操作	
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置为true时，不真正执行停机或恢复操作	
                     * @param _dryRun 为true时，不真正执行停机或恢复操作	
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * master组件名称，支持kube-apiserver、kube-scheduler、kube-controller-manager
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 停机或恢复，值只能为：shutdown或restore
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 为true时，不真正执行停机或恢复操作	
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYMASTERCOMPONENTREQUEST_H_
