#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MarshallerContext)
namespace Amazon::Runtime::Internal {
class IRequest;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class MarshallerContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::MarshallerContext);
// Type: Amazon.Runtime.Internal.Transform::MarshallerContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::MarshallerContext*
class CORDL_TYPE MarshallerContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Request, put = set_Request))::Amazon::Runtime::Internal::IRequest* Request;

  /// @brief Field <Request>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::Amazon::Runtime::Internal::IRequest* _Request_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Transform::MarshallerContext* New_ctor(::Amazon::Runtime::Internal::IRequest* request);

  constexpr ::Amazon::Runtime::Internal::IRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IRequest*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr void __cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::Internal::IRequest* value);

  /// @brief Method .ctor, addr 0x244950c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method get_Request, addr 0x24494fc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::IRequest* get_Request();

  /// @brief Method set_Request, addr 0x2449504, size 0x8, virtual false, abstract: false, final false
  inline void set_Request(::Amazon::Runtime::Internal::IRequest* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarshallerContext(MarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarshallerContext(MarshallerContext const&) = delete;

  /// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::IRequest* ____Request_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::MarshallerContext, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::MarshallerContext, ____Request_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::MarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::MarshallerContext*, "Amazon.Runtime.Internal.Transform", "MarshallerContext");
