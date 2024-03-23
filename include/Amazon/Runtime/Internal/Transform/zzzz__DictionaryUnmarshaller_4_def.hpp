#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryUnmarshaller_4)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IUnmarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller> class KeyValueUnmarshaller_4;
}
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller> class DictionaryUnmarshaller_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4);
// Type: Amazon.Runtime.Internal.Transform::DictionaryUnmarshaller`4
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// cpp template
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::DictionaryUnmarshaller`4<TKey,TValue,TKeyUnmarshaller,TValueUnmarshaller>*
class CORDL_TYPE DictionaryUnmarshaller_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field KVUnmarshaller, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_KVUnmarshaller,
                      put = __cordl_internal_set_KVUnmarshaller))::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>* KVUnmarshaller;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*,
                                                                             ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept;

  /// @brief Convert operator to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*,
                                                                             ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept;

  static inline ::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>* New_ctor(TKeyUnmarshaller kUnmarshaller,
                                                                                                                                               TValueUnmarshaller vUnmarshaller);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context);

  /// @brief Method Unmarshall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context);

  constexpr ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*& __cordl_internal_get_KVUnmarshaller();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*> const&
  __cordl_internal_get_KVUnmarshaller() const;

  constexpr void __cordl_internal_set_KVUnmarshaller(::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKeyUnmarshaller kUnmarshaller, TValueUnmarshaller vUnmarshaller);

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__Dictionary_2_TKey_TValue_____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept;

  /// @brief Convert to
  /// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
  constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
  i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__Dictionary_2_TKey_TValue_____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryUnmarshaller_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryUnmarshaller_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryUnmarshaller_4(DictionaryUnmarshaller_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryUnmarshaller_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryUnmarshaller_4(DictionaryUnmarshaller_4 const&) = delete;

  /// @brief Field KVUnmarshaller, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>* ___KVUnmarshaller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4, "Amazon.Runtime.Internal.Transform", "DictionaryUnmarshaller`4");
