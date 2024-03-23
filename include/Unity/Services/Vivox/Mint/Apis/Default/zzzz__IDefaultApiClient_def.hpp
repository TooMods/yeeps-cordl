#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDefaultApiClient)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Vivox::Mint::Default {
class ConnectTokenV1Request;
}
namespace Unity::Services::Vivox::Mint::Default {
class JoinChannelV1Request;
}
namespace Unity::Services::Vivox::Mint {
class Configuration;
}
namespace Unity::Services::Vivox::Mint {
template <typename T> class Response_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Apis::Default {
class IDefaultApiClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient);
// Type: Unity.Services.Vivox.Mint.Apis.Default::IDefaultApiClient
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Apis::Default {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Apis.Default::IDefaultApiClient*
class CORDL_TYPE IDefaultApiClient {
public:
  // Declarations
  /// @brief Method ConnectTokenV1Async, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* ConnectTokenV1Async(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request,
                                                                                                                         ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration);

  /// @brief Method JoinChannelV1Async, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* JoinChannelV1Async(::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request,
                                                                                                                        ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration);

  // Ctor Parameters [CppParam { name: "", ty: "IDefaultApiClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDefaultApiClient(IDefaultApiClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDefaultApiClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDefaultApiClient(IDefaultApiClient const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Apis::Default
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*, "Unity.Services.Vivox.Mint.Apis.Default", "IDefaultApiClient");
