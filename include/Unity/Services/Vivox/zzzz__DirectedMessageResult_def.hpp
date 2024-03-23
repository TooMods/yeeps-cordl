#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectedMessageResult)
namespace Unity::Services::Vivox {
class IDirectedMessageResult;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class DirectedMessageResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::DirectedMessageResult);
// Type: Unity.Services.Vivox::DirectedMessageResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::DirectedMessageResult*
class CORDL_TYPE DirectedMessageResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  /// @brief Field <RequestId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Vivox::IDirectedMessageResult"
  constexpr operator ::Unity::Services::Vivox::IDirectedMessageResult*() noexcept;

  static inline ::Unity::Services::Vivox::DirectedMessageResult* New_ctor();

  static inline ::Unity::Services::Vivox::DirectedMessageResult* New_ctor(::StringW _requestID);

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2fda45c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2fda4b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW _requestID);

  /// @brief Method get_RequestId, addr 0x2fda44c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_RequestId();

  /// @brief Convert to "::Unity::Services::Vivox::IDirectedMessageResult"
  constexpr ::Unity::Services::Vivox::IDirectedMessageResult* i___Unity__Services__Vivox__IDirectedMessageResult() noexcept;

  /// @brief Method set_RequestId, addr 0x2fda454, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectedMessageResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectedMessageResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectedMessageResult(DirectedMessageResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectedMessageResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectedMessageResult(DirectedMessageResult const&) = delete;

  /// @brief Field <RequestId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::DirectedMessageResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::DirectedMessageResult, ____RequestId_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::DirectedMessageResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::DirectedMessageResult*, "Unity.Services.Vivox", "DirectedMessageResult");
