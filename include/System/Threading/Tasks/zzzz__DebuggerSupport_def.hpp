#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggerSupport)
namespace Internal::Runtime::Augments {
struct AsyncStatus;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class LowLevelDictionary_2;
}
namespace System::Threading::Tasks {
struct CausalityRelation;
}
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
namespace System::Threading::Tasks {
struct CausalityTraceLevel;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class DebuggerSupport;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::DebuggerSupport);
// Type: System.Threading.Tasks::DebuggerSupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::DebuggerSupport*
class CORDL_TYPE DebuggerSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_activeTasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_activeTasks,
                             put = setStaticF_s_activeTasks))::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>* s_activeTasks;

  /// @brief Field s_activeTasksLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_activeTasksLock, put = setStaticF_s_activeTasksLock))::System::Object* s_activeTasksLock;

  /// @brief Method AddToActiveTasks, addr 0xed37dc, size 0x94, virtual false, abstract: false, final false
  static inline void AddToActiveTasks(::System::Threading::Tasks::Task* task);

  /// @brief Method AddToActiveTasksNonInlined, addr 0xed3870, size 0x15c, virtual false, abstract: false, final false
  static inline void AddToActiveTasksNonInlined(::System::Threading::Tasks::Task* task);

  /// @brief Method RemoveFromActiveTasks, addr 0xed3a5c, size 0x94, virtual false, abstract: false, final false
  static inline void RemoveFromActiveTasks(::System::Threading::Tasks::Task* task);

  /// @brief Method RemoveFromActiveTasksNonInlined, addr 0xed3af0, size 0x15c, virtual false, abstract: false, final false
  static inline void RemoveFromActiveTasksNonInlined(::System::Threading::Tasks::Task* task);

  /// @brief Method TraceOperationCompletion, addr 0xed37cc, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task, ::Internal::Runtime::Augments::AsyncStatus status);

  /// @brief Method TraceOperationCreation, addr 0xed37c8, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task, ::StringW operationName, uint64_t relatedContext);

  /// @brief Method TraceOperationRelation, addr 0xed37d0, size 0x4, virtual false, abstract: false, final false
  static inline void TraceOperationRelation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::CausalityRelation relation);

  /// @brief Method TraceSynchronousWorkCompletion, addr 0xed37d8, size 0x4, virtual false, abstract: false, final false
  static inline void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::CausalitySynchronousWork work);

  /// @brief Method TraceSynchronousWorkStart, addr 0xed37d4, size 0x4, virtual false, abstract: false, final false
  static inline void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::Task* task,
                                               ::System::Threading::Tasks::CausalitySynchronousWork work);

  static inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>* getStaticF_s_activeTasks();

  static inline ::System::Object* getStaticF_s_activeTasksLock();

  /// @brief Method get_LoggingOn, addr 0xed37c0, size 0x8, virtual false, abstract: false, final false
  static inline bool get_LoggingOn();

  static inline void setStaticF_s_activeTasks(::System::Collections::Generic::LowLevelDictionary_2<int32_t, ::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF_s_activeTasksLock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggerSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerSupport(DebuggerSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerSupport(DebuggerSupport const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::DebuggerSupport, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::DebuggerSupport);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::DebuggerSupport*, "System.Threading.Tasks", "DebuggerSupport");
