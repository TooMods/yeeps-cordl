#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxApiException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxApiException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxApiException);
// Type: Unity.Services.Vivox::VivoxApiException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxApiException*
class CORDL_TYPE VivoxApiException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) int32_t StatusCode;

  /// @brief Field <RequestId>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField)) int32_t _StatusCode_k__BackingField;

  /// @brief Method GetErrorString, addr 0x16fdcc4, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetErrorString(int32_t statusCode);

  static inline ::Unity::Services::Vivox::VivoxApiException* New_ctor(int32_t statusCode);

  static inline ::Unity::Services::Vivox::VivoxApiException* New_ctor(int32_t statusCode, ::System::Exception* inner);

  static inline ::Unity::Services::Vivox::VivoxApiException* New_ctor(int32_t statusCode, ::StringW requestId);

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x16fdbe8, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t statusCode);

  /// @brief Method .ctor, addr 0x16fde20, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int32_t statusCode, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x16fdd34, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t statusCode, ::StringW requestId);

  /// @brief Method get_RequestId, addr 0x16fdbd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RequestId();

  /// @brief Method get_StatusCode, addr 0x16fdbc8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StatusCode();

  /// @brief Method set_RequestId, addr 0x16fdbe0, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

  /// @brief Method set_StatusCode, addr 0x16fdbd0, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxApiException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxApiException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxApiException(VivoxApiException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxApiException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxApiException(VivoxApiException const&) = delete;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  int32_t ____StatusCode_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxApiException, 0x98>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxApiException, ____StatusCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxApiException, ____RequestId_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxApiException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxApiException*, "Unity.Services.Vivox", "VivoxApiException");
