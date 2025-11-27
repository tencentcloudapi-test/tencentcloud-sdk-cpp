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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBESAVINGPLANRESOURCEINFOREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBESAVINGPLANRESOURCEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {

                /**
                * DescribeSavingPlanResourceInfo请求参数结构体
                */
                class DescribeSavingPlanResourceInfoRequest : public AbstractModel
                {
                public:
                    DescribeSavingPlanResourceInfoRequest();
                    ~DescribeSavingPlanResourceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数量，最大值为100
                     * @return Limit 数量，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数量，最大值为100
                     * @param _limit 数量，最大值为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取购买开始时间，格式yyyy-MM-dd
                     * @return CreateStartDate 购买开始时间，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetCreateStartDate() const;

                    /**
                     * 设置购买开始时间，格式yyyy-MM-dd
                     * @param _createStartDate 购买开始时间，格式yyyy-MM-dd
                     * 
                     */
                    void SetCreateStartDate(const std::string& _createStartDate);

                    /**
                     * 判断参数 CreateStartDate 是否已赋值
                     * @return CreateStartDate 是否已赋值
                     * 
                     */
                    bool CreateStartDateHasBeenSet() const;

                    /**
                     * 获取购买结束时间，格式yyyy-MM-dd
                     * @return CreateEndDate 购买结束时间，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetCreateEndDate() const;

                    /**
                     * 设置购买结束时间，格式yyyy-MM-dd
                     * @param _createEndDate 购买结束时间，格式yyyy-MM-dd
                     * 
                     */
                    void SetCreateEndDate(const std::string& _createEndDate);

                    /**
                     * 判断参数 CreateEndDate 是否已赋值
                     * @return CreateEndDate 是否已赋值
                     * 
                     */
                    bool CreateEndDateHasBeenSet() const;

                private:

                    /**
                     * 数量，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 购买开始时间，格式yyyy-MM-dd
                     */
                    std::string m_createStartDate;
                    bool m_createStartDateHasBeenSet;

                    /**
                     * 购买结束时间，格式yyyy-MM-dd
                     */
                    std::string m_createEndDate;
                    bool m_createEndDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBESAVINGPLANRESOURCEINFOREQUEST_H_
