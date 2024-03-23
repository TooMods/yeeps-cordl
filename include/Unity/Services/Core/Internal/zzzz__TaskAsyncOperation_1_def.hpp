#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_1_def.hpp"
CORDL_MODULE_EXPORT(TaskAsyncOperation_1)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
template <typename T> class AsyncOperationBase_1;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationStatus;
}
namespace Unity::Services::Core::Internal {
template <typename T> class __TaskAsyncOperation_1____c;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
template <typename T> class TaskAsyncOperation_1;
}
namespace Unity::Services::Core::Internal {
template <typename T> class __TaskAsyncOperation_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::TaskAsyncOperation_1);
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TaskAsyncOperation`1::<>c<T>*
class CORDL_TYPE __TaskAsyncOperation_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>* __9__11_0;

  static inline ::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* New_ctor();

  /// @brief Method <.ctor>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__11_0(::System::Threading::Tasks::Task_1<T>* t, ::System::Object* state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* getStaticF___9();

  static inline ::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>* getStaticF___9__11_0();

  static inline void setStaticF___9(::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* value);

  static inline void setStaticF___9__11_0(::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskAsyncOperation_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskAsyncOperation_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskAsyncOperation_1____c(__TaskAsyncOperation_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskAsyncOperation_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskAsyncOperation_1____c(__TaskAsyncOperation_1____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::TaskAsyncOperation`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::TaskAsyncOperation`1<T>*
class CORDL_TYPE TaskAsyncOperation_1 : public ::Unity::Services::Core::Internal::AsyncOperationBase_1<T> {
public:
  // Declarations
  using __c = ::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>;

  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_Result)) T Result;

  __declspec(property(get = get_Status))::Unity::Services::Core::Internal::AsyncOperationStatus Status;

  /// @brief Field m_Task, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Task, put = __cordl_internal_set_m_Task))::System::Threading::Tasks::Task_1<T>* m_Task;

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>* GetAwaiter();

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetResult();

  static inline ::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>* New_ctor(::System::Threading::Tasks::Task_1<T>* task);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>* Run(::System::Func_1<T>* func);

  constexpr ::System::Threading::Tasks::Task_1<T>*& __cordl_internal_get_m_Task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<T>*> const& __cordl_internal_get_m_Task() const;

  constexpr void __cordl_internal_set_m_Task(::System::Threading::Tasks::Task_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<T>* task);

  /// @brief Method get_Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_Result();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationStatus get_Status();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskAsyncOperation_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskAsyncOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskAsyncOperation_1(TaskAsyncOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskAsyncOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskAsyncOperation_1(TaskAsyncOperation_1 const&) = delete;

  /// @brief Field m_Task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<T>* ___m_Task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::TaskAsyncOperation_1, "Unity.Services.Core.Internal", "TaskAsyncOperation`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c, "Unity.Services.Core.Internal", "TaskAsyncOperation`1/<>c");
