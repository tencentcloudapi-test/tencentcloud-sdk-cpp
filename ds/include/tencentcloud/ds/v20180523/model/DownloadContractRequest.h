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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_DOWNLOADCONTRACTREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_DOWNLOADCONTRACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {

                /**
                * DownloadContract请求参数结构体
                */
                class DownloadContractRequest : public AbstractModel
                {
                public:
                    DownloadContractRequest();
                    ~DownloadContractRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名ContractMng
                     * @return Module 模块名ContractMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名ContractMng
                     * @param _module 模块名ContractMng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名DownloadContract
                     * @return Operation 操作名DownloadContract
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名DownloadContract
                     * @param _operation 操作名DownloadContract
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
                     * 获取合同ID
                     * @return ContractResId 合同ID
                     * 
                     */
                    std::string GetContractResId() const;

                    /**
                     * 设置合同ID
                     * @param _contractResId 合同ID
                     * 
                     */
                    void SetContractResId(const std::string& _contractResId);

                    /**
                     * 判断参数 ContractResId 是否已赋值
                     * @return ContractResId 是否已赋值
                     * 
                     */
                    bool ContractResIdHasBeenSet() const;

                private:

                    /**
                     * 模块名ContractMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名DownloadContract
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 合同ID
                     */
                    std::string m_contractResId;
                    bool m_contractResIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_DOWNLOADCONTRACTREQUEST_H_
