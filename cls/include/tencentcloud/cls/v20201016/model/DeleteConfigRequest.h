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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteConfig请求参数结构体
                */
                class DeleteConfigRequest : public AbstractModel
                {
                public:
                    DeleteConfigRequest();
                    ~DeleteConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集规则配置ID
                     * @return ConfigId 采集规则配置ID
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置采集规则配置ID
                     * @param ConfigId 采集规则配置ID
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * 采集规则配置ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONFIGREQUEST_H_
