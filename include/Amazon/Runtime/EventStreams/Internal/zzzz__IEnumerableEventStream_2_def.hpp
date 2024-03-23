#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEnumerableEventStream_2)
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class IEventStream_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class IEnumerableEventStream_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2);
// Type: Amazon.Runtime.EventStreams.Internal::IEnumerableEventStream`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// cpp template
template <typename T, typename TE>
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::IEnumerableEventStream`2<T,TE>*
class CORDL_TYPE IEnumerableEventStream_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>* i___Amazon__Runtime__EventStreams__Internal__IEventStream_2_T_TE_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerableEventStream_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnumerableEventStream_2(IEnumerableEventStream_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerableEventStream_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerableEventStream_2(IEnumerableEventStream_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2, "Amazon.Runtime.EventStreams.Internal", "IEnumerableEventStream`2");
