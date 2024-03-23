#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOperation)
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
class IAsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IAsyncOperation);
// Type: Unity.Services.Core.Internal::IAsyncOperation
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::IAsyncOperation*
class CORDL_TYPE IAsyncOperation {
public:
  // Declarations
  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_Status))::Unity::Services::Core::Internal::AsyncOperationStatus Status;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method add_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* value);

  /// @brief Method get_Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsDone();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationStatus get_Status();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Method remove_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncOperation(IAsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncOperation(IAsyncOperation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IAsyncOperation*, "Unity.Services.Core.Internal", "IAsyncOperation");
