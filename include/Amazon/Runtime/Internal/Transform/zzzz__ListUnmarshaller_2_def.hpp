#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListUnmarshaller_2)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename I, typename IUnmarshaller> class ListUnmarshaller_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2);
// Type: Amazon.Runtime.Internal.Transform::ListUnmarshaller`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename I, typename IUnmarshaller>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::ListUnmarshaller`2<I,IUnmarshaller>*
class CORDL_TYPE ListUnmarshaller_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field iUnmarshaller, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_iUnmarshaller, put = __cordl_internal_set_iUnmarshaller)) IUnmarshaller iUnmarshaller;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  static inline ::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>* New_ctor(IUnmarshaller iUnmarshaller);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<I>* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<I>* Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  constexpr IUnmarshaller const& __cordl_internal_get_iUnmarshaller() const;

  constexpr IUnmarshaller& __cordl_internal_get_iUnmarshaller();

  constexpr void __cordl_internal_set_iUnmarshaller(IUnmarshaller value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(IUnmarshaller iUnmarshaller);

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__List_1_I_____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__List_1_I_____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListUnmarshaller_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListUnmarshaller_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListUnmarshaller_2(ListUnmarshaller_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListUnmarshaller_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListUnmarshaller_2(ListUnmarshaller_2 const&) = delete;

  /// @brief Field iUnmarshaller, offset: 0x10, size: 0x8, def value: None
  IUnmarshaller ___iUnmarshaller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2, "Amazon.Runtime.Internal.Transform", "ListUnmarshaller`2");
