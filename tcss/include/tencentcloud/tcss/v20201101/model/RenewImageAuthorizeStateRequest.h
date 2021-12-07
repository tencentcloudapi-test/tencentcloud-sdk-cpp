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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RENEWIMAGEAUTHORIZESTATEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RENEWIMAGEAUTHORIZESTATEREQUEST_H_

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
                * RenewImageAuthorizeState请求参数结构体
                */
                class RenewImageAuthorizeStateRequest : public AbstractModel
                {
                public:
                    RenewImageAuthorizeStateRequest();
                    ~RenewImageAuthorizeStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否全部未授权镜像
                     * @return AllImages 是否全部未授权镜像
                     */
                    bool GetAllImages() const;

                    /**
                     * 设置是否全部未授权镜像
                     * @param AllImages 是否全部未授权镜像
                     */
                    void SetAllImages(const bool& _allImages);

                    /**
                     * 判断参数 AllImages 是否已赋值
                     * @return AllImages 是否已赋值
                     */
                    bool AllImagesHasBeenSet() const;

                    /**
                     * 获取镜像ids
                     * @return ImageIds 镜像ids
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置镜像ids
                     * @param ImageIds 镜像ids
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                private:

                    /**
                     * 是否全部未授权镜像
                     */
                    bool m_allImages;
                    bool m_allImagesHasBeenSet;

                    /**
                     * 镜像ids
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RENEWIMAGEAUTHORIZESTATEREQUEST_H_
