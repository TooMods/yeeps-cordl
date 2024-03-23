#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ICache_2)
namespace Amazon::Runtime::Internal::Util {
class ICache;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename TKey, typename TValue> class ICache_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::ICache_2);
// Type: Amazon.Runtime.Internal.Util::ICache`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::ICache`2<TKey,TValue>*
class CORDL_TYPE ICache_2 {
public:
  // Declarations
  __declspec(property(get = get_Keys))::System::Collections::Generic::List_1<TKey>* Keys;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ICache"
  constexpr operator ::Amazon::Runtime::Internal::Util::ICache*() noexcept;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear(TKey key);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator, ByRef<bool> isStaleItem);

  /// @brief Method UseCache, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TOut> inline TOut UseCache(TKey key, ::System::Func_1<TOut>* operation, ::System::Action* onError, ::System::Predicate_1<::System::Exception*>* shouldRetryForException);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<TKey>* get_Keys();

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::ICache"
  constexpr ::Amazon::Runtime::Internal::Util::ICache* i___Amazon__Runtime__Internal__Util__ICache() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICache_2(ICache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICache_2(ICache_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::ICache_2, "Amazon.Runtime.Internal.Util", "ICache`2");
