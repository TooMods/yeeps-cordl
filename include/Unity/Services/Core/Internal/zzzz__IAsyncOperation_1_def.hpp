#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOperation_1)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationStatus;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
template <typename T> class IAsyncOperation_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::IAsyncOperation_1);
// Type: Unity.Services.Core.Internal::IAsyncOperation`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IAsyncOperation`1<T>*
class CORDL_TYPE IAsyncOperation_1 {
public:
  // Declarations
  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_Result)) T Result;

  __declspec(property(get = get_Status))::Unity::Services::Core::Internal::AsyncOperationStatus Status;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method add_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value);

  /// @brief Method get_Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsDone();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Result();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationStatus get_Status();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Method remove_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncOperation_1(IAsyncOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncOperation_1(IAsyncOperation_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::IAsyncOperation_1, "Unity.Services.Core.Internal", "IAsyncOperation`1");
