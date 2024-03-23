#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMarshaller_2)
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IMarshaller_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::IMarshaller_2);
// Type: Amazon.Runtime.Internal.Transform::IMarshaller`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename T, typename R>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::IMarshaller`2<T,R>*
class CORDL_TYPE IMarshaller_2 {
public:
  // Declarations
  /// @brief Method Marshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Marshall(R input);

  // Ctor Parameters [CppParam { name: "", ty: "IMarshaller_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMarshaller_2(IMarshaller_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMarshaller_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMarshaller_2(IMarshaller_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::IMarshaller_2, "Amazon.Runtime.Internal.Transform", "IMarshaller`2");
