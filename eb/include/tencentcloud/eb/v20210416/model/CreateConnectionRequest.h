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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATECONNECTIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATECONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/ConnectionDescription.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateConnection请求参数结构体
                */
                class CreateConnectionRequest : public AbstractModel
                {
                public:
                    CreateConnectionRequest();
                    ~CreateConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取连接器描述
                     * @return ConnectionDescription 连接器描述
                     */
                    ConnectionDescription GetConnectionDescription() const;

                    /**
                     * 设置连接器描述
                     * @param ConnectionDescription 连接器描述
                     */
                    void SetConnectionDescription(const ConnectionDescription& _connectionDescription);

                    /**
                     * 判断参数 ConnectionDescription 是否已赋值
                     * @return ConnectionDescription 是否已赋值
                     */
                    bool ConnectionDescriptionHasBeenSet() const;

                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param EventBusId 事件集ID
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取连接器名称
                     * @return ConnectionName 连接器名称
                     */
                    std::string GetConnectionName() const;

                    /**
                     * 设置连接器名称
                     * @param ConnectionName 连接器名称
                     */
                    void SetConnectionName(const std::string& _connectionName);

                    /**
                     * 判断参数 ConnectionName 是否已赋值
                     * @return ConnectionName 是否已赋值
                     */
                    bool ConnectionNameHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取使能开关
                     * @return Enable 使能开关
                     */
                    bool GetEnable() const;

                    /**
                     * 设置使能开关
                     * @param Enable 使能开关
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param Type 类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 连接器描述
                     */
                    ConnectionDescription m_connectionDescription;
                    bool m_connectionDescriptionHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 连接器名称
                     */
                    std::string m_connectionName;
                    bool m_connectionNameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 使能开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATECONNECTIONREQUEST_H_
