#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeyValueUnmarshaller_4)
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
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller> class KeyValueUnmarshaller_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4);
// Type: Amazon.Runtime.Internal.Transform::KeyValueUnmarshaller`4
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::KeyValueUnmarshaller`4<K,V,KUnmarshaller,VUnmarshaller>*
class CORDL_TYPE KeyValueUnmarshaller_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyUnmarshaller, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyUnmarshaller, put = __cordl_internal_set_keyUnmarshaller)) KUnmarshaller keyUnmarshaller;

  /// @brief Field valueUnmarshaller, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_valueUnmarshaller, put = __cordl_internal_set_valueUnmarshaller)) VUnmarshaller valueUnmarshaller;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr
  operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  static inline ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>* New_ctor(KUnmarshaller keyUnmarshaller, VUnmarshaller valueUnmarshaller);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<K, V> Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<K, V> Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  constexpr KUnmarshaller const& __cordl_internal_get_keyUnmarshaller() const;

  constexpr KUnmarshaller& __cordl_internal_get_keyUnmarshaller();

  constexpr VUnmarshaller const& __cordl_internal_get_valueUnmarshaller() const;

  constexpr VUnmarshaller& __cordl_internal_get_valueUnmarshaller();

  constexpr void __cordl_internal_set_keyUnmarshaller(KUnmarshaller value);

  constexpr void __cordl_internal_set_valueUnmarshaller(VUnmarshaller value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(KUnmarshaller keyUnmarshaller, VUnmarshaller valueUnmarshaller);

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__KeyValuePair_2_K_V____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__KeyValuePair_2_K_V____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValueUnmarshaller_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValueUnmarshaller_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValueUnmarshaller_4(KeyValueUnmarshaller_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValueUnmarshaller_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValueUnmarshaller_4(KeyValueUnmarshaller_4 const&) = delete;

  /// @brief Field keyUnmarshaller, offset: 0x10, size: 0x8, def value: None
  KUnmarshaller ___keyUnmarshaller;

  /// @brief Field valueUnmarshaller, offset: 0x18, size: 0x8, def value: None
  VUnmarshaller ___valueUnmarshaller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4, "Amazon.Runtime.Internal.Transform", "KeyValueUnmarshaller`4");
