#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRequestData)
namespace Amazon::Runtime::Internal::Auth {
class AbstractAWSSigner;
}
namespace Amazon::Runtime::Internal::Transform {
class ResponseUnmarshaller;
}
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class IRequestData;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::IRequestData);
// Type: Amazon.Runtime.Internal::IRequestData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::IRequestData*
class CORDL_TYPE IRequestData {
public:
  // Declarations
  __declspec(property(get = get_Metrics))::Amazon::Runtime::Internal::Util::RequestMetrics* Metrics;

  __declspec(property(get = get_Request))::Amazon::Runtime::Internal::IRequest* Request;

  __declspec(property(get = get_RetriesAttempt)) int32_t RetriesAttempt;

  __declspec(property(get = get_Signer))::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Signer;

  __declspec(property(get = get_Unmarshaller))::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* Unmarshaller;

  /// @brief Method get_Metrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Util::RequestMetrics* get_Metrics();

  /// @brief Method get_Request, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::IRequest* get_Request();

  /// @brief Method get_RetriesAttempt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_RetriesAttempt();

  /// @brief Method get_Signer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* get_Signer();

  /// @brief Method get_Unmarshaller, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* get_Unmarshaller();

  // Ctor Parameters [CppParam { name: "", ty: "IRequestData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRequestData(IRequestData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRequestData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRequestData(IRequestData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::IRequestData);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::IRequestData*, "Amazon.Runtime.Internal", "IRequestData");
