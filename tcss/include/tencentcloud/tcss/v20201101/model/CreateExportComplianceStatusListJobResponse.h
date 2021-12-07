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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateExportComplianceStatusListJob返回参数结构体
                */
                class CreateExportComplianceStatusListJobResponse : public AbstractModel
                {
                public:
                    CreateExportComplianceStatusListJobResponse();
                    ~CreateExportComplianceStatusListJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回创建的导出任务的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 返回创建的导出任务的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 返回创建的导出任务的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBRESPONSE_H_
