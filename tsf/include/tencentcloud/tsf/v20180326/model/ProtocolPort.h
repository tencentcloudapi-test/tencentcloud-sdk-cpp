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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PROTOCOLPORT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PROTOCOLPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 	端口对象
                */
                class ProtocolPort : public AbstractModel
                {
                public:
                    ProtocolPort();
                    ~ProtocolPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCP UDP
                     * @return Protocol TCP UDP
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置TCP UDP
                     * @param Protocol TCP UDP
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取服务端口
                     * @return Port 服务端口
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置服务端口
                     * @param Port 服务端口
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取容器端口
                     * @return TargetPort 容器端口
                     */
                    int64_t GetTargetPort() const;

                    /**
                     * 设置容器端口
                     * @param TargetPort 容器端口
                     */
                    void SetTargetPort(const int64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     */
                    bool TargetPortHasBeenSet() const;

                private:

                    /**
                     * TCP UDP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 服务端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 容器端口
                     */
                    int64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PROTOCOLPORT_H_
