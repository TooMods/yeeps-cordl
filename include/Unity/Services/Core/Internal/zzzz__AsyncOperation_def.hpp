#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperation)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationStatus;
}
namespace Unity::Services::Core::Internal {
class IAsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class AsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::AsyncOperation);
// Type: Unity.Services.Core.Internal::AsyncOperation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::AsyncOperation*
class CORDL_TYPE AsyncOperation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Exception, put = set_Exception))::System::Exception* Exception;

  __declspec(property(get = get_IsDone, put = set_IsDone)) bool IsDone;

  __declspec(property(get = get_Status, put = set_Status))::Unity::Services::Core::Internal::AsyncOperationStatus Status;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <Exception>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Exception_k__BackingField, put = __cordl_internal_set__Exception_k__BackingField))::System::Exception* _Exception_k__BackingField;

  /// @brief Field <IsDone>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDone_k__BackingField, put = __cordl_internal_set__IsDone_k__BackingField)) bool _IsDone_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField,
                      put = __cordl_internal_set__Status_k__BackingField))::Unity::Services::Core::Internal::AsyncOperationStatus _Status_k__BackingField;

  /// @brief Field m_CompletedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompletedCallback,
                      put = __cordl_internal_set_m_CompletedCallback))::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* m_CompletedCallback;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperation"
  constexpr operator ::Unity::Services::Core::Internal::IAsyncOperation*() noexcept;

  /// @brief Method Cancel, addr 0x26697ac, size 0x98, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Fail, addr 0x2669760, size 0x4c, virtual false, abstract: false, final false
  inline void Fail(::System::Exception* reason);

  static inline ::Unity::Services::Core::Internal::AsyncOperation* New_ctor();

  /// @brief Method SetInProgress, addr 0x266970c, size 0xc, virtual false, abstract: false, final false
  inline void SetInProgress();

  /// @brief Method Succeed, addr 0x2669718, size 0x48, virtual false, abstract: false, final false
  inline void Succeed();

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x2669844, size 0x10, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2669854, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2669858, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__Exception_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsDone_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDone_k__BackingField();

  constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus& __cordl_internal_get__Status_k__BackingField();

  constexpr ::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>*& __cordl_internal_get_m_CompletedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>*> const& __cordl_internal_get_m_CompletedCallback() const;

  constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception* value);

  constexpr void __cordl_internal_set__IsDone_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Status_k__BackingField(::Unity::Services::Core::Internal::AsyncOperationStatus value);

  constexpr void __cordl_internal_set_m_CompletedCallback(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* value);

  /// @brief Method .ctor, addr 0x2669860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Completed, addr 0x266957c, size 0xd8, virtual true, abstract: false, final true
  inline void add_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* value);

  /// @brief Method get_Exception, addr 0x26696fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Exception* get_Exception();

  /// @brief Method get_IsDone, addr 0x2669558, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsDone();

  /// @brief Method get_Status, addr 0x266956c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Core::Internal::AsyncOperationStatus get_Status();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperation"
  constexpr ::Unity::Services::Core::Internal::IAsyncOperation* i___Unity__Services__Core__Internal__IAsyncOperation() noexcept;

  /// @brief Method remove_Completed, addr 0x2669654, size 0xa8, virtual true, abstract: false, final true
  inline void remove_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* value);

  /// @brief Method set_Exception, addr 0x2669704, size 0x8, virtual false, abstract: false, final false
  inline void set_Exception(::System::Exception* value);

  /// @brief Method set_IsDone, addr 0x2669560, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDone(bool value);

  /// @brief Method set_Status, addr 0x2669574, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(::Unity::Services::Core::Internal::AsyncOperationStatus value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOperation(AsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOperation(AsyncOperation const&) = delete;

  /// @brief Field <IsDone>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsDone_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Unity::Services::Core::Internal::AsyncOperationStatus ____Status_k__BackingField;

  /// @brief Field <Exception>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Exception* ____Exception_k__BackingField;

  /// @brief Field m_CompletedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation*>* ___m_CompletedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::AsyncOperation, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::AsyncOperation, ____IsDone_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::AsyncOperation, ____Status_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::AsyncOperation, ____Exception_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::AsyncOperation, ___m_CompletedCallback) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::AsyncOperation*, "Unity.Services.Core.Internal", "AsyncOperation");
