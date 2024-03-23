#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EC2UnmarshallerContext)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class EC2UnmarshallerContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext);
// Type: Amazon.Runtime.Internal.Transform::EC2UnmarshallerContext
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::EC2UnmarshallerContext*
class CORDL_TYPE EC2UnmarshallerContext : public ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext {
public:
  // Declarations
  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  /// @brief Field <RequestId>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext* New_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                         ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException);

  /// @brief Method Read, addr 0x244f4c4, size 0xf0, virtual true, abstract: false, final false
  inline bool Read();

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x244bc88, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* responseStream, bool maintainResponseBody, ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException);

  /// @brief Method get_RequestId, addr 0x244f4b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RequestId();

  /// @brief Method set_RequestId, addr 0x244f4bc, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EC2UnmarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EC2UnmarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EC2UnmarshallerContext(EC2UnmarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EC2UnmarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EC2UnmarshallerContext(EC2UnmarshallerContext const&) = delete;

  /// @brief Field <RequestId>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext, 0x98>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext, ____RequestId_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::EC2UnmarshallerContext*, "Amazon.Runtime.Internal.Transform", "EC2UnmarshallerContext");
