/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package dao;

import config.DBConnection;
import java.sql.*;

public class UserDAO {

    public ResultSet findUser(
        String username,
        String passwordHash
    ) throws SQLException {

        String sql =
            "SELECT user_id, username, full_name, role " +
            "FROM users WHERE username=? " +
            "AND password_hash=? AND is_active=1";

        Connection con = DBConnection.getConnection();

        PreparedStatement ps = con.prepareStatement(sql);

        ps.setString(1, username);
        ps.setString(2, passwordHash);

        // The caller must close the ResultSet,
        // statement, and connection.

        return ps.executeQuery();
    }
}

