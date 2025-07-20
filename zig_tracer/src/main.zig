const std = @import("std");
const zig_tracer = @import("zig_tracer");

const PTraceError = error{
    NonZero,
};

pub fn main() !void {
    var args = std.process.args();
    _ = args.next();
    const pid_str = args.next().?;
    const pid = try std.fmt.parseInt(i32, pid_str, 10);
    std.debug.print("pid = {d}\n", .{pid});
    const ret = std.os.linux.ptrace(std.os.linux.PTRACE.ATTACH, pid, 0, 0, 0);
    if (ret != 0) {
        return PTraceError.NonZero;
    }
}
