#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundWorker)
namespace System::ComponentModel {
class AsyncOperation;
}
namespace System::ComponentModel {
class DoWorkEventArgs;
}
namespace System::ComponentModel {
class DoWorkEventHandler;
}
namespace System::ComponentModel {
class ProgressChangedEventArgs;
}
namespace System::ComponentModel {
class ProgressChangedEventHandler;
}
namespace System::ComponentModel {
class RunWorkerCompletedEventArgs;
}
namespace System::ComponentModel {
class RunWorkerCompletedEventHandler;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class BackgroundWorker;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::BackgroundWorker);
// Type: System.ComponentModel::BackgroundWorker
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::BackgroundWorker*
class CORDL_TYPE BackgroundWorker : public ::System::ComponentModel::Component {
public:
  // Declarations
  __declspec(property(get = get_CancellationPending)) bool CancellationPending;

  /// @brief Field DoWork, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_DoWork, put = __cordl_internal_set_DoWork))::System::ComponentModel::DoWorkEventHandler* DoWork;

  __declspec(property(get = get_IsBusy)) bool IsBusy;

  /// @brief Field ProgressChanged, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ProgressChanged, put = __cordl_internal_set_ProgressChanged))::System::ComponentModel::ProgressChangedEventHandler* ProgressChanged;

  /// @brief Field RunWorkerCompleted, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_RunWorkerCompleted, put = __cordl_internal_set_RunWorkerCompleted))::System::ComponentModel::RunWorkerCompletedEventHandler* RunWorkerCompleted;

  __declspec(property(get = get_WorkerReportsProgress, put = set_WorkerReportsProgress)) bool WorkerReportsProgress;

  __declspec(property(get = get_WorkerSupportsCancellation, put = set_WorkerSupportsCancellation)) bool WorkerSupportsCancellation;

  /// @brief Field _asyncOperation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncOperation, put = __cordl_internal_set__asyncOperation))::System::ComponentModel::AsyncOperation* _asyncOperation;

  /// @brief Field _canCancelWorker, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__canCancelWorker, put = __cordl_internal_set__canCancelWorker)) bool _canCancelWorker;

  /// @brief Field _cancellationPending, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__cancellationPending, put = __cordl_internal_set__cancellationPending)) bool _cancellationPending;

  /// @brief Field _isRunning, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__isRunning, put = __cordl_internal_set__isRunning)) bool _isRunning;

  /// @brief Field _operationCompleted, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__operationCompleted, put = __cordl_internal_set__operationCompleted))::System::Threading::SendOrPostCallback* _operationCompleted;

  /// @brief Field _progressReporter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__progressReporter, put = __cordl_internal_set__progressReporter))::System::Threading::SendOrPostCallback* _progressReporter;

  /// @brief Field _workerReportsProgress, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__workerReportsProgress, put = __cordl_internal_set__workerReportsProgress)) bool _workerReportsProgress;

  /// @brief Method AsyncOperationCompleted, addr 0x1ae6034, size 0x94, virtual false, abstract: false, final false
  inline void AsyncOperationCompleted(::System::Object* arg);

  /// @brief Method CancelAsync, addr 0x1ae60d0, size 0x68, virtual false, abstract: false, final false
  inline void CancelAsync();

  /// @brief Method Dispose, addr 0x1ae6abc, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::ComponentModel::BackgroundWorker* New_ctor();

  /// @brief Method OnDoWork, addr 0x1ae6278, size 0x28, virtual true, abstract: false, final false
  inline void OnDoWork(::System::ComponentModel::DoWorkEventArgs* e);

  /// @brief Method OnProgressChanged, addr 0x1ae62c8, size 0x28, virtual true, abstract: false, final false
  inline void OnProgressChanged(::System::ComponentModel::ProgressChangedEventArgs* e);

  /// @brief Method OnRunWorkerCompleted, addr 0x1ae62a0, size 0x28, virtual true, abstract: false, final false
  inline void OnRunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventArgs* e);

  /// @brief Method ProgressReporter, addr 0x1ae6428, size 0x90, virtual false, abstract: false, final false
  inline void ProgressReporter(::System::Object* arg);

  /// @brief Method ReportProgress, addr 0x1ae64b8, size 0x8, virtual false, abstract: false, final false
  inline void ReportProgress(int32_t percentProgress);

  /// @brief Method ReportProgress, addr 0x1ae64c0, size 0x100, virtual false, abstract: false, final false
  inline void ReportProgress(int32_t percentProgress, ::System::Object* userState);

  /// @brief Method RunWorkerAsync, addr 0x1ae65c0, size 0x8, virtual false, abstract: false, final false
  inline void RunWorkerAsync();

  /// @brief Method RunWorkerAsync, addr 0x1ae65c8, size 0x20c, virtual false, abstract: false, final false
  inline void RunWorkerAsync(::System::Object* argument);

  /// @brief Method WorkerThreadStart, addr 0x1ae6934, size 0x188, virtual false, abstract: false, final false
  inline void WorkerThreadStart(::System::Object* argument);

  /// @brief Method <RunWorkerAsync>b__27_0, addr 0x1ae6ac0, size 0x4, virtual false, abstract: false, final false
  inline void _RunWorkerAsync_b__27_0(::System::Object* arg);

  constexpr ::System::ComponentModel::DoWorkEventHandler*& __cordl_internal_get_DoWork();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::DoWorkEventHandler*> const& __cordl_internal_get_DoWork() const;

  constexpr ::System::ComponentModel::ProgressChangedEventHandler*& __cordl_internal_get_ProgressChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ProgressChangedEventHandler*> const& __cordl_internal_get_ProgressChanged() const;

  constexpr ::System::ComponentModel::RunWorkerCompletedEventHandler*& __cordl_internal_get_RunWorkerCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::RunWorkerCompletedEventHandler*> const& __cordl_internal_get_RunWorkerCompleted() const;

  constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get__asyncOperation();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AsyncOperation*> const& __cordl_internal_get__asyncOperation() const;

  constexpr bool const& __cordl_internal_get__canCancelWorker() const;

  constexpr bool& __cordl_internal_get__canCancelWorker();

  constexpr bool const& __cordl_internal_get__cancellationPending() const;

  constexpr bool& __cordl_internal_get__cancellationPending();

  constexpr bool const& __cordl_internal_get__isRunning() const;

  constexpr bool& __cordl_internal_get__isRunning();

  constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__operationCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> const& __cordl_internal_get__operationCompleted() const;

  constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__progressReporter();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> const& __cordl_internal_get__progressReporter() const;

  constexpr bool const& __cordl_internal_get__workerReportsProgress() const;

  constexpr bool& __cordl_internal_get__workerReportsProgress();

  constexpr void __cordl_internal_set_DoWork(::System::ComponentModel::DoWorkEventHandler* value);

  constexpr void __cordl_internal_set_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value);

  constexpr void __cordl_internal_set_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value);

  constexpr void __cordl_internal_set__asyncOperation(::System::ComponentModel::AsyncOperation* value);

  constexpr void __cordl_internal_set__canCancelWorker(bool value);

  constexpr void __cordl_internal_set__cancellationPending(bool value);

  constexpr void __cordl_internal_set__isRunning(bool value);

  constexpr void __cordl_internal_set__operationCompleted(::System::Threading::SendOrPostCallback* value);

  constexpr void __cordl_internal_set__progressReporter(::System::Threading::SendOrPostCallback* value);

  constexpr void __cordl_internal_set__workerReportsProgress(bool value);

  /// @brief Method .ctor, addr 0x1ae5f50, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_DoWork, addr 0x1ae6138, size 0x9c, virtual false, abstract: false, final false
  inline void add_DoWork(::System::ComponentModel::DoWorkEventHandler* value);

  /// @brief Method add_ProgressChanged, addr 0x1ae62f0, size 0x9c, virtual false, abstract: false, final false
  inline void add_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value);

  /// @brief Method add_RunWorkerCompleted, addr 0x1ae67d4, size 0x9c, virtual false, abstract: false, final false
  inline void add_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value);

  /// @brief Method get_CancellationPending, addr 0x1ae60c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_CancellationPending();

  /// @brief Method get_IsBusy, addr 0x1ae6270, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsBusy();

  /// @brief Method get_WorkerReportsProgress, addr 0x1ae690c, size 0x8, virtual false, abstract: false, final false
  inline bool get_WorkerReportsProgress();

  /// @brief Method get_WorkerSupportsCancellation, addr 0x1ae6920, size 0x8, virtual false, abstract: false, final false
  inline bool get_WorkerSupportsCancellation();

  /// @brief Method remove_DoWork, addr 0x1ae61d4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_DoWork(::System::ComponentModel::DoWorkEventHandler* value);

  /// @brief Method remove_ProgressChanged, addr 0x1ae638c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler* value);

  /// @brief Method remove_RunWorkerCompleted, addr 0x1ae6870, size 0x9c, virtual false, abstract: false, final false
  inline void remove_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler* value);

  /// @brief Method set_WorkerReportsProgress, addr 0x1ae6914, size 0xc, virtual false, abstract: false, final false
  inline void set_WorkerReportsProgress(bool value);

  /// @brief Method set_WorkerSupportsCancellation, addr 0x1ae6928, size 0xc, virtual false, abstract: false, final false
  inline void set_WorkerSupportsCancellation(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundWorker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundWorker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundWorker(BackgroundWorker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundWorker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundWorker(BackgroundWorker const&) = delete;

  /// @brief Field _canCancelWorker, offset: 0x28, size: 0x1, def value: None
  bool ____canCancelWorker;

  /// @brief Field _workerReportsProgress, offset: 0x29, size: 0x1, def value: None
  bool ____workerReportsProgress;

  /// @brief Field _cancellationPending, offset: 0x2a, size: 0x1, def value: None
  bool ____cancellationPending;

  /// @brief Field _isRunning, offset: 0x2b, size: 0x1, def value: None
  bool ____isRunning;

  /// @brief Field _asyncOperation, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::AsyncOperation* ____asyncOperation;

  /// @brief Field _operationCompleted, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SendOrPostCallback* ____operationCompleted;

  /// @brief Field _progressReporter, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::SendOrPostCallback* ____progressReporter;

  /// @brief Field DoWork, offset: 0x48, size: 0x8, def value: None
  ::System::ComponentModel::DoWorkEventHandler* ___DoWork;

  /// @brief Field ProgressChanged, offset: 0x50, size: 0x8, def value: None
  ::System::ComponentModel::ProgressChangedEventHandler* ___ProgressChanged;

  /// @brief Field RunWorkerCompleted, offset: 0x58, size: 0x8, def value: None
  ::System::ComponentModel::RunWorkerCompletedEventHandler* ___RunWorkerCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::BackgroundWorker, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____canCancelWorker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____workerReportsProgress) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____cancellationPending) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____isRunning) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____asyncOperation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____operationCompleted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____progressReporter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ___DoWork) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ___ProgressChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ___RunWorkerCompleted) == 0x58, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::BackgroundWorker);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BackgroundWorker*, "System.ComponentModel", "BackgroundWorker");
