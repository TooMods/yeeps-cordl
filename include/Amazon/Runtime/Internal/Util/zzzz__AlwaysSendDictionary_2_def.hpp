#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
CORDL_MODULE_EXPORT(AlwaysSendDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class AlwaysSendDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2);
// Type: Amazon.Runtime.Internal.Util::AlwaysSendDictionary`2
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::AlwaysSendDictionary`2<TKey,TValue>*
class CORDL_TYPE AlwaysSendDictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey, TValue> {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>* New_ctor();

  static inline ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysSendDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlwaysSendDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysSendDictionary_2(AlwaysSendDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysSendDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysSendDictionary_2(AlwaysSendDictionary_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2, "Amazon.Runtime.Internal.Util", "AlwaysSendDictionary`2");
