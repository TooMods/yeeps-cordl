#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadHelper)
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading {
class SynchronizationContext;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Scheduler {
class ThreadHelper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper);
// Type: Unity.Services.Vivox.Mint.Scheduler::ThreadHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Scheduler {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Scheduler::ThreadHelper*
class CORDL_TYPE ThreadHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mainThreadId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__mainThreadId, put = setStaticF__mainThreadId)) int32_t _mainThreadId;

  /// @brief Field _taskScheduler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__taskScheduler, put = setStaticF__taskScheduler))::System::Threading::Tasks::TaskScheduler* _taskScheduler;

  /// @brief Field _unitySynchronizationContext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__unitySynchronizationContext, put = setStaticF__unitySynchronizationContext))::System::Threading::SynchronizationContext* _unitySynchronizationContext;

  /// @brief Method Init, addr 0x1701504, size 0xac, virtual false, abstract: false, final false
  static inline void Init();

  static inline int32_t getStaticF__mainThreadId();

  static inline ::System::Threading::Tasks::TaskScheduler* getStaticF__taskScheduler();

  static inline ::System::Threading::SynchronizationContext* getStaticF__unitySynchronizationContext();

  /// @brief Method get_MainThreadId, addr 0x17014bc, size 0x48, virtual false, abstract: false, final false
  static inline int32_t get_MainThreadId();

  /// @brief Method get_SynchronizationContext, addr 0x170142c, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_TaskScheduler, addr 0x1701474, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_TaskScheduler();

  static inline void setStaticF__mainThreadId(int32_t value);

  static inline void setStaticF__taskScheduler(::System::Threading::Tasks::TaskScheduler* value);

  static inline void setStaticF__unitySynchronizationContext(::System::Threading::SynchronizationContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadHelper(ThreadHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadHelper(ThreadHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Scheduler
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Scheduler::ThreadHelper*, "Unity.Services.Vivox.Mint.Scheduler", "ThreadHelper");
