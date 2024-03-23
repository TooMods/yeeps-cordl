#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvokeAsyncResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class InvokeAsyncResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::InvokeAsyncResponse);
// Type: Amazon.Lambda.Model::InvokeAsyncResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::InvokeAsyncResponse*
class CORDL_TYPE InvokeAsyncResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Status, put = set_Status)) int32_t Status;

  /// @brief Field _status, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status))::System::Nullable_1<int32_t> _status;

  /// @brief Method IsSetStatus, addr 0x2bcc99c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetStatus();

  static inline ::Amazon::Lambda::Model::InvokeAsyncResponse* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__status() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__status();

  constexpr void __cordl_internal_set__status(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bcc9d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Status, addr 0x2bcc8f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Status();

  /// @brief Method set_Status, addr 0x2bcc934, size 0x68, virtual false, abstract: false, final false
  inline void set_Status(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeAsyncResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeAsyncResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeAsyncResponse(InvokeAsyncResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeAsyncResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeAsyncResponse(InvokeAsyncResponse const&) = delete;

  /// @brief Field _status, offset: 0x24, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::InvokeAsyncResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeAsyncResponse, ____status) == 0x24, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::InvokeAsyncResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::InvokeAsyncResponse*, "Amazon.Lambda.Model", "InvokeAsyncResponse");
