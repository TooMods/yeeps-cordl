#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestFailedException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Core {
class RequestFailedException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::RequestFailedException);
// Type: Unity.Services.Core::RequestFailedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::RequestFailedException*
class CORDL_TYPE RequestFailedException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) int32_t ErrorCode;

  /// @brief Field <ErrorCode>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__ErrorCode_k__BackingField, put = __cordl_internal_set__ErrorCode_k__BackingField)) int32_t _ErrorCode_k__BackingField;

  static inline ::Unity::Services::Core::RequestFailedException* New_ctor(int32_t errorCode, ::StringW message);

  static inline ::Unity::Services::Core::RequestFailedException* New_ctor(int32_t errorCode, ::StringW message, ::System::Exception* innerException);

  constexpr int32_t const& __cordl_internal_get__ErrorCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ErrorCode_k__BackingField();

  constexpr void __cordl_internal_set__ErrorCode_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x23ba644, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode, ::StringW message);

  /// @brief Method .ctor, addr 0x23ba64c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode, ::StringW message, ::System::Exception* innerException);

  /// @brief Method get_ErrorCode, addr 0x23ba63c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ErrorCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestFailedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestFailedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestFailedException(RequestFailedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestFailedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestFailedException(RequestFailedException const&) = delete;

  /// @brief Field <ErrorCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  int32_t ____ErrorCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::RequestFailedException, 0x90>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::RequestFailedException, ____ErrorCode_k__BackingField) == 0x8c, "Offset mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::RequestFailedException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::RequestFailedException*, "Unity.Services.Core", "RequestFailedException");
